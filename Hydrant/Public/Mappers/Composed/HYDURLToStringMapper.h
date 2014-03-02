#import "HYDBase.h"

@protocol HYDMapper;

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToString(NSString *destinationKey);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToString(id<HYDMapper> mapper);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 *  @params allowedSchemes The set of allowed schemes for this mapper to accept.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToStringOfScheme(NSString *destinationKey, NSArray *allowedSchemes)
HYD_REQUIRE_NON_NIL(2);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params allowedSchemes The set of allowed schemes for this mapper to accept.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToStringOfScheme(id<HYDMapper> mapper, NSArray *allowedSchemes)
HYD_REQUIRE_NON_NIL(2);
