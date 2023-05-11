
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartRangeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartRangeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartRangeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartRangeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiChartChartRangeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXChartRangeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartRangeEnum || defined(INCLUDE_DXChartRangeEnum))
#define DXChartRangeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXChartRangeEnum : PSBaseEnum {
 @public
  NSString *rangeName_;
  jint count_;
  jint unit_;
}
@property (readonly, class) jint UNIT_UNDEFINED NS_SWIFT_NAME(UNIT_UNDEFINED);
@property (readonly, class) jint UNIT_MIN NS_SWIFT_NAME(UNIT_MIN);
@property (readonly, class) jint UNIT_DAY NS_SWIFT_NAME(UNIT_DAY);
@property (readonly, class) jint UNIT_MONTH NS_SWIFT_NAME(UNIT_MONTH);
@property (readonly, class) jint UNIT_YEAR NS_SWIFT_NAME(UNIT_YEAR);
@property (readonly, class, strong) DXChartRangeEnum *AUTO NS_SWIFT_NAME(AUTO);
@property (readonly, class, strong) DXChartRangeEnum *MIN5 NS_SWIFT_NAME(MIN5);
@property (readonly, class, strong) DXChartRangeEnum *MIN30 NS_SWIFT_NAME(MIN30);
@property (readonly, class, strong) DXChartRangeEnum *MIN60 NS_SWIFT_NAME(MIN60);
@property (readonly, class, strong) DXChartRangeEnum *TODAY NS_SWIFT_NAME(TODAY);
@property (readonly, class, strong) DXChartRangeEnum *DAY1 NS_SWIFT_NAME(DAY1);
@property (readonly, class, strong) DXChartRangeEnum *DAY3 NS_SWIFT_NAME(DAY3);
@property (readonly, class, strong) DXChartRangeEnum *DAY5 NS_SWIFT_NAME(DAY5);
@property (readonly, class, strong) DXChartRangeEnum *DAY10 NS_SWIFT_NAME(DAY10);
@property (readonly, class, strong) DXChartRangeEnum *DAY15 NS_SWIFT_NAME(DAY15);
@property (readonly, class, strong) DXChartRangeEnum *DAY30 NS_SWIFT_NAME(DAY30);
@property (readonly, class, strong) DXChartRangeEnum *DAY55 NS_SWIFT_NAME(DAY55);
@property (readonly, class, strong) DXChartRangeEnum *DAY160 NS_SWIFT_NAME(DAY160);
@property (readonly, class, strong) DXChartRangeEnum *DAY80 NS_SWIFT_NAME(DAY80);
@property (readonly, class, strong) DXChartRangeEnum *DAY90 NS_SWIFT_NAME(DAY90);
@property (readonly, class, strong) DXChartRangeEnum *WEEK1 NS_SWIFT_NAME(WEEK1);
@property (readonly, class, strong) DXChartRangeEnum *MONTH1 NS_SWIFT_NAME(MONTH1);
@property (readonly, class, strong) DXChartRangeEnum *MONTH3 NS_SWIFT_NAME(MONTH3);
@property (readonly, class, strong) DXChartRangeEnum *MONTH6 NS_SWIFT_NAME(MONTH6);
@property (readonly, class, strong) DXChartRangeEnum *YTD NS_SWIFT_NAME(YTD);
@property (readonly, class, strong) DXChartRangeEnum *YEAR1 NS_SWIFT_NAME(YEAR1);
@property (readonly, class, strong) DXChartRangeEnum *YEAR2 NS_SWIFT_NAME(YEAR2);
@property (readonly, class, strong) DXChartRangeEnum *YEAR4 NS_SWIFT_NAME(YEAR4);
@property (readonly, class, strong) DXChartRangeEnum *YEAR5 NS_SWIFT_NAME(YEAR5);
@property (readonly, class, strong) DXChartRangeEnum *YEAR6 NS_SWIFT_NAME(YEAR6);
@property (readonly, class, strong) DXChartRangeEnum *YEAR8 NS_SWIFT_NAME(YEAR8);
@property (readonly, class, strong) DXChartRangeEnum *YEAR30 NS_SWIFT_NAME(YEAR30);
@property (readonly, class, strong) DXChartRangeEnum *YEAR40 NS_SWIFT_NAME(YEAR40);
@property (readonly, class, strong) DXChartRangeEnum *YEAR170 NS_SWIFT_NAME(YEAR170);

+ (jint)UNIT_UNDEFINED;

+ (jint)UNIT_MIN;

+ (jint)UNIT_DAY;

+ (jint)UNIT_MONTH;

+ (jint)UNIT_YEAR;

+ (DXChartRangeEnum *)AUTO;

+ (DXChartRangeEnum *)MIN5;

+ (DXChartRangeEnum *)MIN30;

+ (DXChartRangeEnum *)MIN60;

+ (DXChartRangeEnum *)TODAY;

+ (DXChartRangeEnum *)DAY1;

+ (DXChartRangeEnum *)DAY3;

+ (DXChartRangeEnum *)DAY5;

+ (DXChartRangeEnum *)DAY10;

+ (DXChartRangeEnum *)DAY15;

+ (DXChartRangeEnum *)DAY30;

+ (DXChartRangeEnum *)DAY55;

+ (DXChartRangeEnum *)DAY160;

+ (DXChartRangeEnum *)DAY80;

+ (DXChartRangeEnum *)DAY90;

+ (DXChartRangeEnum *)WEEK1;

+ (DXChartRangeEnum *)MONTH1;

+ (DXChartRangeEnum *)MONTH3;

+ (DXChartRangeEnum *)MONTH6;

+ (DXChartRangeEnum *)YTD;

+ (DXChartRangeEnum *)YEAR1;

+ (DXChartRangeEnum *)YEAR2;

+ (DXChartRangeEnum *)YEAR4;

+ (DXChartRangeEnum *)YEAR5;

+ (DXChartRangeEnum *)YEAR6;

+ (DXChartRangeEnum *)YEAR8;

+ (DXChartRangeEnum *)YEAR30;

+ (DXChartRangeEnum *)YEAR40;

+ (DXChartRangeEnum *)YEAR170;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal
                              withNSString:(NSString *)rangeName
                                   withInt:(jint)count
                                   withInt:(jint)unit;

- (DXChartRangeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXChartRangeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXChartRangeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXChartRangeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (jint)getCount;

- (NSString *)getRangeName;

- (jint)getUnit;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXChartRangeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

#pragma mark Protected

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

@end

J2OBJC_STATIC_INIT(DXChartRangeEnum)

J2OBJC_FIELD_SETTER(DXChartRangeEnum, rangeName_, NSString *)

inline jint DXChartRangeEnum_get_UNIT_UNDEFINED(void);
#define DXChartRangeEnum_UNIT_UNDEFINED 0
J2OBJC_STATIC_FIELD_CONSTANT(DXChartRangeEnum, UNIT_UNDEFINED, jint)

inline jint DXChartRangeEnum_get_UNIT_MIN(void);
#define DXChartRangeEnum_UNIT_MIN 1
J2OBJC_STATIC_FIELD_CONSTANT(DXChartRangeEnum, UNIT_MIN, jint)

inline jint DXChartRangeEnum_get_UNIT_DAY(void);
#define DXChartRangeEnum_UNIT_DAY 2
J2OBJC_STATIC_FIELD_CONSTANT(DXChartRangeEnum, UNIT_DAY, jint)

inline jint DXChartRangeEnum_get_UNIT_MONTH(void);
#define DXChartRangeEnum_UNIT_MONTH 3
J2OBJC_STATIC_FIELD_CONSTANT(DXChartRangeEnum, UNIT_MONTH, jint)

inline jint DXChartRangeEnum_get_UNIT_YEAR(void);
#define DXChartRangeEnum_UNIT_YEAR 5
J2OBJC_STATIC_FIELD_CONSTANT(DXChartRangeEnum, UNIT_YEAR, jint)

inline DXChartRangeEnum *DXChartRangeEnum_get_AUTO(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_AUTO;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, AUTO, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MIN5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MIN5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MIN5, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MIN30(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MIN30;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MIN30, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MIN60(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MIN60;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MIN60, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_TODAY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_TODAY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, TODAY, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY1, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY3(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY3;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY3, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY5, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY10(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY10;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY10, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY15(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY15;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY15, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY30(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY30;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY30, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY55(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY55;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY55, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY160(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY160;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY160, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY80(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY80;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY80, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_DAY90(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_DAY90;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, DAY90, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_WEEK1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_WEEK1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, WEEK1, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MONTH1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MONTH1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MONTH1, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MONTH3(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MONTH3;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MONTH3, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_MONTH6(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_MONTH6;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, MONTH6, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YTD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YTD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YTD, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR1(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR1;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR1, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR2(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR2;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR2, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR4(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR4;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR4, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR5(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR5;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR5, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR6(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR6;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR6, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR8(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR8;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR8, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR30(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR30;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR30, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR40(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR40;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR40, DXChartRangeEnum *)

inline DXChartRangeEnum *DXChartRangeEnum_get_YEAR170(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_YEAR170;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXChartRangeEnum, YEAR170, DXChartRangeEnum *)

FOUNDATION_EXPORT void DXChartRangeEnum_initWithNSString_withInt_withNSString_withInt_withInt_(DXChartRangeEnum *self, NSString *name, jint ordinal, NSString *rangeName, jint count, jint unit);

FOUNDATION_EXPORT DXChartRangeEnum *new_DXChartRangeEnum_initWithNSString_withInt_withNSString_withInt_withInt_(NSString *name, jint ordinal, NSString *rangeName, jint count, jint unit) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartRangeEnum *create_DXChartRangeEnum_initWithNSString_withInt_withNSString_withInt_withInt_(NSString *name, jint ordinal, NSString *rangeName, jint count, jint unit);

FOUNDATION_EXPORT void DXChartRangeEnum_init(DXChartRangeEnum *self);

FOUNDATION_EXPORT DXChartRangeEnum *new_DXChartRangeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartRangeEnum *create_DXChartRangeEnum_init(void);

FOUNDATION_EXPORT void DXChartRangeEnum_initWithNSString_withInt_(DXChartRangeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXChartRangeEnum *new_DXChartRangeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXChartRangeEnum *create_DXChartRangeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXChartRangeEnum *DXChartRangeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXChartRangeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXChartRangeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiChartChartRangeEnum DXChartRangeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiChartChartRangeEnum")
