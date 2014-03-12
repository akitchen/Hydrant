#import "HYDBase.h"
#import "HYDNonFatalMapper.h"
#import "HYDNotNullMapper.h"

// TODO: test these methods?

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 */
HYD_EXTERN
id<HYDMapper> HYDMapOptionally(void);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param mapper The inner mapper that is also processing the value.
 * @returns a mapper that converts all fatal errors into non-fatal ones.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyTo(id<HYDMapper> mapper)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param destinationKey The property or key path to store the given value.
 * @param defaultValue The default value to return when the value is nil.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefault(id defaultValue)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param mapper The inner mapper that is also processing the value.
 * @param defaultValue The default value to return when the value is nil.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefault(id<HYDMapper> mapper, id defaultValue)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param mapper The inner mapper that is also processing the value.
 * @param defaultValue The default value to return when the value is nil.
 * @param reverseDefaultValue The default value to return when the value is nil from the reversed mapper.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefault(id<HYDMapper> mapper, id defaultValue, id reverseDefaultValue)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param mapper The inner mapper that is also processing the value.
 * @param defaultValueFactory The default value to return when the value is nil. This is generated by
 *                            calling this block each time.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefaultFactory(HYDValueBlock defaultValueFactory)
HYD_REQUIRE_NON_NIL(1);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param destinationKey The property or key path to store the given value.
 * @param defaultValueFactory The default value to return when the value is nil. This is generated by
 *                            calling this block each time.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefaultFactory(id<HYDMapper> mapper, HYDValueBlock defaultValueFactory)
HYD_REQUIRE_NON_NIL(1,2);

/*! Constructs a mapper that is the composition of HYDMapNonFatally(HYDMapNotNull(...)).
 *
 * @param mapper The inner mapper that is also processing the value.
 * @param defaultValueFactory The default value to return when the value is nil. This is generated by
 *                            calling the block each time.
 * @param reverseDefaultValueFactory The default value to return when the value is nil from the reversed
 *                                   mapper. This is generated by calling this block each time.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapOptionallyWithDefaultFactory(id<HYDMapper> mapper,
                                                 HYDValueBlock defaultValueFactory,
                                                 HYDValueBlock reverseDefaultValueFactory)
HYD_REQUIRE_NON_NIL(1,2,3);
