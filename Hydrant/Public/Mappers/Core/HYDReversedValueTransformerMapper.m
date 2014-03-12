#import "HYDReversedValueTransformerMapper.h"
#import "HYDError.h"
#import "HYDValueTransformerMapper.h"
#import "HYDIdentityMapper.h"


@interface HYDReversedValueTransformerMapper ()

@property (strong, nonatomic) id<HYDMapper> innerMapper;
@property (strong, nonatomic) NSValueTransformer *valueTransformer;

@end


@implementation HYDReversedValueTransformerMapper

- (id)init
{
    [self doesNotRecognizeSelector:_cmd];
    return nil;
}

- (id)initWithMapper:(id<HYDMapper>)innerMapper valueTransformer:(NSValueTransformer *)valueTransformer
{
    if (![[valueTransformer class] allowsReverseTransformation]) {
        [NSException raise:NSInvalidArgumentException
                    format:@"HYDReversedValueTransformerMapper cannot use value tranformer %@ because it is declared as having no reverse transformation",
                           valueTransformer];
    }

    self = [super init];
    if (self) {
        self.innerMapper = innerMapper;
        self.valueTransformer = valueTransformer;
    }
    return self;
}

#pragma mark - <NSObject>

- (NSString *)description
{
    return [NSString stringWithFormat:@"<%@: %@ with %@>",
            NSStringFromClass(self.class),
            self.valueTransformer,
            self.innerMapper];
}

#pragma mark - <HYDMapper>

- (id)objectFromSourceObject:(id)sourceObject error:(__autoreleasing HYDError **)error
{
    return [self.valueTransformer reverseTransformedValue:sourceObject];
}

- (id<HYDMapper>)reverseMapper
{
    id<HYDMapper> reversedInnerMapper = [self.innerMapper reverseMapper];
    return [[HYDValueTransformerMapper alloc] initWithMapper:reversedInnerMapper
                                            valueTransformer:self.valueTransformer];
}

@end


HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapReverseValue(id<HYDMapper> mapper, NSString *valueTransformerName)
{
    NSValueTransformer *transformer = [NSValueTransformer valueTransformerForName:valueTransformerName];
    if (!transformer) {
        [NSException raise:NSInvalidArgumentException
                    format:@"No transformer found when doing: [NSValueTransformer: valueTransformerForName:@\"%@\"]",
                           valueTransformerName];
    }
    return HYDMapReverseValue(mapper, transformer);
}


HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapReverseValue(id<HYDMapper> mapper, NSValueTransformer *valueTransformer)
{
    return [[HYDReversedValueTransformerMapper alloc] initWithMapper:mapper valueTransformer:valueTransformer];
}


HYD_EXTERN_OVERLOADED
HYDReversedValueTransformerMapper *HYDMapReverseValue(NSString *valueTransformerName)
{
    NSValueTransformer *transformer = [NSValueTransformer valueTransformerForName:valueTransformerName];
    if (!transformer) {
        [NSException raise:NSInvalidArgumentException
                    format:@"No transformer found when doing: [NSValueTransformer: valueTransformerForName:@\"%@\"]",
                           valueTransformerName];
    }
    return HYDMapReverseValue(transformer);
}


HYD_EXTERN_OVERLOADED
HYDReversedValueTransformerMapper *HYDMapReverseValue(NSValueTransformer *valueTransformer)
{
    return HYDMapReverseValue(HYDMapIdentity(), valueTransformer);
}
