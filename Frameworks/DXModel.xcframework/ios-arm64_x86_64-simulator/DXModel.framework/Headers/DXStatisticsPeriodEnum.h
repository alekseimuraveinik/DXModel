
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStatisticsPeriodEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum || defined(INCLUDE_DXStatisticsPeriodEnum))
#define DXStatisticsPeriodEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStatisticsPeriodEnum : PSBaseEnum
@property (readonly, class, strong) DXStatisticsPeriodEnum *DAY NS_SWIFT_NAME(DAY);
@property (readonly, class, strong) DXStatisticsPeriodEnum *WEEK NS_SWIFT_NAME(WEEK);
@property (readonly, class, strong) DXStatisticsPeriodEnum *MONTH NS_SWIFT_NAME(MONTH);
@property (readonly, class, strong) DXStatisticsPeriodEnum *MONTH3 NS_SWIFT_NAME(MONTH3);
@property (readonly, class, strong) DXStatisticsPeriodEnum *MONTH6 NS_SWIFT_NAME(MONTH6);
@property (readonly, class, strong) DXStatisticsPeriodEnum *YEAR NS_SWIFT_NAME(YEAR);

+ (DXStatisticsPeriodEnum *)DAY;

+ (DXStatisticsPeriodEnum *)WEEK;

+ (DXStatisticsPeriodEnum *)MONTH;

+ (DXStatisticsPeriodEnum *)MONTH3;

+ (DXStatisticsPeriodEnum *)MONTH6;

+ (DXStatisticsPeriodEnum *)YEAR;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStatisticsPeriodEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStatisticsPeriodEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStatisticsPeriodEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStatisticsPeriodEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXStatisticsPeriodEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStatisticsPeriodEnum)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_DAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_DAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, DAY, DXStatisticsPeriodEnum *)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_WEEK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_WEEK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, WEEK, DXStatisticsPeriodEnum *)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_MONTH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_MONTH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, MONTH, DXStatisticsPeriodEnum *)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_MONTH3(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_MONTH3;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, MONTH3, DXStatisticsPeriodEnum *)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_MONTH6(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_MONTH6;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, MONTH6, DXStatisticsPeriodEnum *)

inline DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_get_YEAR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_YEAR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStatisticsPeriodEnum, YEAR, DXStatisticsPeriodEnum *)

FOUNDATION_EXPORT void DXStatisticsPeriodEnum_initWithNSString_withInt_(DXStatisticsPeriodEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStatisticsPeriodEnum *new_DXStatisticsPeriodEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatisticsPeriodEnum *create_DXStatisticsPeriodEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStatisticsPeriodEnum_init(DXStatisticsPeriodEnum *self);

FOUNDATION_EXPORT DXStatisticsPeriodEnum *new_DXStatisticsPeriodEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStatisticsPeriodEnum *create_DXStatisticsPeriodEnum_init(void);

FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStatisticsPeriodEnum *DXStatisticsPeriodEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStatisticsPeriodEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStatisticsPeriodEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum DXStatisticsPeriodEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiQuoteStatisticsPeriodEnum")
