#import "HYDBase.h"
#import "HYDMapper.h"


@interface HYDIdentityMapper : NSObject <HYDMapper>

- (id)initWithDestinationAccessor:(id<HYDAccessor>)destinationAccessor;

@end

/*! A mapper that wraps an accessor to support the HYDMapper protocol.
 *
 *  @param destinationKey the property hint to the parent mapper to indicate where to place the returned value.
 *  @returns a mapper that returns any value its given.
 *
 *  @see HYDObjectMapper
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapIdentity(id<HYDAccessor> destinationAccessor)
HYD_REQUIRE_NON_NIL(1);

/*! A mapper that just returns the value it was given.
 *  Uses HYDAccessDefault as the default accessor.
 *
 *  @param destinationKey the property hint to the parent mapper to indicate where to place the returned value.
 *  @returns a mapper that returns any value its given.
 *
 *  @see HYDObjectMapper
 *  @see HYDAccessDefault
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapIdentity(NSString *destinationKey)
HYD_REQUIRE_NON_NIL(1);

/*! A mapper that just returns the value it was given.
 *  Uses HYDAccessKey to generate the accessor.
 *
 *  @param destinationKey the property hint to the parent mapper to indicate where to place the returned value.
 *  @returns a mapper that returns any value its given.
 *
 *  @see HYDObjectMapper
 *  @see HYDAccessKey
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapKey(NSString *destinationKey)
HYD_REQUIRE_NON_NIL(1);

/*! A mapper that just returns the value it was given.
 *  Uses HYDAccessKeyPath to generate the accessor.
 *
 *  @param destinationKey the property hint to the parent mapper to indicate where to place the returned value.
 *  @returns a mapper that returns any value its given.
 *
 *  @see HYDObjectMapper
 *  @see HYDAccessKey
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapKeyPath(NSString *destinationKey)
HYD_REQUIRE_NON_NIL(1);
