#import "HYDBase.h"

@protocol HYDMapper;

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(NSString *destinationKey);

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(id<HYDMapper> mapper);

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 *  @params numberFormatStyle the NSNumberFormatterStyle for the internal number formatter
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(NSString *destinationKey, NSNumberFormatterStyle numberFormatStyle);

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params numberFormatStyle the NSNumberFormatterStyle for the internal number formatter
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(id<HYDMapper> mapper, NSNumberFormatterStyle numberFormatStyle);

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params destinationKey The property hint to where the place the mapped value to for other mappers.
 *  @params NSNumberFormatter A custom number formatter instance to use.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(NSString *destinationKey, NSNumberFormatter *numberFormatter)
HYD_REQUIRE_NON_NIL(2);

/*! Constructs a mapper that converts a number to a string.
 *
 *  @params mapper The mapper that processes the source value before this mapper.
 *  @params NSNumberFormatter A custom number formatter instance to use.
 */
HYD_EXTERN_OVERLOADED
id<HYDMapper> HYDMapNumberToString(id<HYDMapper>, NSNumberFormatter *numberFormatter)
HYD_REQUIRE_NON_NIL(2);
