#import "HYDAccessor.h"

@class HYDError;

@interface HYDSFakeAccesor : NSObject <HYDAccessor>

@property (strong, nonatomic) NSArray *fieldNames;
@property (strong, nonatomic) NSArray *valuesToReturn;
@property (strong, nonatomic) id sourceErrorToReturn;
@property (strong, nonatomic) id sourceValuesReceived;
@property (strong, nonatomic) NSArray *valuesToSetReceived;
@property (strong, nonatomic) HYDError *setValuesErrorToReturn;
@property (strong, nonatomic) id destinationObjectReceived;

@end
