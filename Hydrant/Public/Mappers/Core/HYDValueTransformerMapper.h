#import "HYDBase.h"
#import "HYDMapper.h"


@interface HYDValueTransformerMapper : NSObject <HYDMapper>

- (id)initWithMapper:(id<HYDMapper>)innerMapper valueTransformer:(NSValueTransformer *)valueTransformer;

@end

/*! Constructs a mapper that uses the transformValue from an NSValueTransformer to map values.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params valueTransformerName The name of the value transformer to look up and use.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapValue(id<HYDMapper> mapper, NSString *valueTransformerName)
HYD_REQUIRE_NON_NIL(2);

/*! Constructs a mapper that uses the transformValue from an NSValueTransformer to map values.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params valueTransformer The value transformer instance to use to map values.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapValue(id<HYDMapper> mapper, NSValueTransformer *valueTransformer)
HYD_REQUIRE_NON_NIL(2);

/*! Constructs a mapper that uses the transformValue from an NSValueTransformer to map values.
 *
 *  @params valueTransformerName The name of the value transformer to look up and use.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapValue(NSString *valueTransformerName)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that uses the transformValue from an NSValueTransformer to map values.
 *
 *  @params valueTransformer The value transformer instance to use to map values.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapValue(NSValueTransformer *valueTransformer)
HYD_REQUIRE_NON_NIL(1);
