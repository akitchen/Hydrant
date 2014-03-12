#import "HYDBase.h"

@protocol HYDMapper;

/*! Constructs a mapper that maps URLs to strings.
 */
HYD_EXTERN
id<HYDMapper> HYDMapURLToString(void);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToStringFrom(id<HYDMapper> mapper);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params allowedSchemes The set of allowed schemes for this mapper to accept.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToStringOfScheme(NSArray *allowedSchemes)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that maps URLs to strings.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params allowedSchemes The set of allowed schemes for this mapper to accept.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapURLToStringOfScheme(id<HYDMapper> mapper, NSArray *allowedSchemes)
HYD_REQUIRE_NON_NIL(2);
