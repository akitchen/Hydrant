#import "HYDBase.h"

@protocol HYDMapper;

/*! Constructs a mapper to convert UUIDs to strings.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapUUIDToString(NSString *destinationKey)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper to convert UUIDs to strings.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapUUIDToString(id<HYDMapper> mapper)
HYD_REQUIRE_NON_NIL(1);
