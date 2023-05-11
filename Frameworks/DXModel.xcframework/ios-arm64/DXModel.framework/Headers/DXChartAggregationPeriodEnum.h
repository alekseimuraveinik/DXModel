
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChartAggregationPeriodEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum || defined(INCLUDE_DXChartAggregationPeriodEnum))
#define DXChartAggregationPeriodEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXChartAggregationPeriodEnum : PSBaseEnum {
 @public
  NSString *periodName_;
  jint value_;
}
@property (readonly, class, strong) DXChartAggregationPeriodEnum *AUTO NS_SWIFT_NAME(AUTO);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MIN1 NS_SWIFT_NAME(MIN1);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MIN5 NS_SWIFT_NAME(MIN5);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MIN10 NS_SWIFT_NAME(MIN10);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MIN15 NS_SWIFT_NAME(MIN15);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MIN30 NS_SWIFT_NAME(MIN30);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *HOUR1 NS_SWIFT_NAME(HOUR1);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *HOUR2 NS_SWIFT_NAME(HOUR2);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *HOUR4 NS_SWIFT_NAME(HOUR4);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *HOUR6 NS_SWIFT_NAME(HOUR6);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *HOUR8 NS_SWIFT_NAME(HOUR8);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *DAY NS_SWIFT_NAME(DAY);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *WEEK NS_SWIFT_NAME(WEEK);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *MONTH NS_SWIFT_NAME(MONTH);
@property (readonly, class, strong) DXChartAggregationPeriodEnum *YEAR NS_SWIFT_NAME(YEAR);

+ (DXChartAggregationPeriodEnum *)AUTO;

+ (DXChartAggregationPeriodEnum *)MIN1;

+ (DXChartAggregationPeriodEnum *)MIN5;

+ (DXChartAggregationPeriodEnum *)MIN10;

+ (DXChartAggregationPeriodEnum *)MIN15;

+ (DXChartAggregationPeriodEnum *)MIN30;

+ (DXChartAggregationPeriodEnum *)HOUR1;

+ (DXChartAggregationPeriodEnum *)HOUR2;

+ (DXChartAggregationPeriodEnum *)HOUR4;

+ (DXChartAggregationPeriodEnum *)HOUR6;

+ (DXChartAggregationPeriodEnum *)HOUR8;

+ (DXChartAggregationPeriodEnum *)DAY;

+ (DXChartAggregationPeriodEnum *)WEEK;

+ (DXChartAggregationPeriodEnum *)MONTH;

+ (DXChartAggregationPeriodEnum *)YEAR;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXChartAggregationPeriodEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXChartAggregationPeriodEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXChartAggregationPeriodEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXChartAggregationPeriodEnum *)getByOrdinalWithInt:(jint)ordinal;

- (NSString *)getPeriodName;

- (jint)getValue;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXChartAggregationPeriodEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

#pragma mark Protected

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

#pragma mark Package-Private

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal
                              withNSString:(NSString *)periodName
                                   withInt:(jint)value;

@end

J2OBJC_STATIC_INIT(DXChartAggregationPeriodEnum)

J2OBJC_FIELD_SETTER(DXChartAggregationPeriodEnum, periodName_, NSString *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_AUTO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_AUTO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, AUTO, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MIN1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MIN1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MIN1, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MIN5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MIN5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MIN5, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MIN10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MIN10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MIN10, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MIN15(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MIN15;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MIN15, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MIN30(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MIN30;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MIN30, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_HOUR1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_HOUR1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, HOUR1, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_HOUR2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_HOUR2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, HOUR2, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_HOUR4(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_HOUR4;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, HOUR4, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_HOUR6(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_HOUR6;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, HOUR6, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_HOUR8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_HOUR8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, HOUR8, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_DAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_DAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, DAY, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_WEEK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_WEEK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, WEEK, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_MONTH(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_MONTH;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, MONTH, DXChartAggregationPeriodEnum *)

inline DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_get_YEAR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_YEAR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartAggregationPeriodEnum, YEAR, DXChartAggregationPeriodEnum *)

FOUNDATION_EXPORT void DXChartAggregationPeriodEnum_initWithNSString_withInt_withNSString_withInt_(DXChartAggregationPeriodEnum *self, NSString *name, jint ordinal, NSString *periodName, jint value);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *new_DXChartAggregationPeriodEnum_initWithNSString_withInt_withNSString_withInt_(NSString *name, jint ordinal, NSString *periodName, jint value) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *create_DXChartAggregationPeriodEnum_initWithNSString_withInt_withNSString_withInt_(NSString *name, jint ordinal, NSString *periodName, jint value);

FOUNDATION_EXPORT void DXChartAggregationPeriodEnum_init(DXChartAggregationPeriodEnum *self);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *new_DXChartAggregationPeriodEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *create_DXChartAggregationPeriodEnum_init(void);

FOUNDATION_EXPORT void DXChartAggregationPeriodEnum_initWithNSString_withInt_(DXChartAggregationPeriodEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *new_DXChartAggregationPeriodEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *create_DXChartAggregationPeriodEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXChartAggregationPeriodEnum *DXChartAggregationPeriodEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXChartAggregationPeriodEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChartAggregationPeriodEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum DXChartAggregationPeriodEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartAggregationPeriodEnum")
