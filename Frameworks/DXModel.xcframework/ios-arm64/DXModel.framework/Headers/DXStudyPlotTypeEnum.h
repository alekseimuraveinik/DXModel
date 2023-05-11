
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyPlotTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum || defined(INCLUDE_DXStudyPlotTypeEnum))
#define DXStudyPlotTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStudyPlotTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXStudyPlotTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXStudyPlotTypeEnum *BASELINE NS_SWIFT_NAME(BASELINE);
@property (readonly, class, strong) DXStudyPlotTypeEnum *LINE NS_SWIFT_NAME(LINE);
@property (readonly, class, strong) DXStudyPlotTypeEnum *HYSTOGRAM NS_SWIFT_NAME(HYSTOGRAM);
@property (readonly, class, strong) DXStudyPlotTypeEnum *POINTS NS_SWIFT_NAME(POINTS);

+ (DXStudyPlotTypeEnum *)UNDEFINED;

+ (DXStudyPlotTypeEnum *)BASELINE;

+ (DXStudyPlotTypeEnum *)LINE;

+ (DXStudyPlotTypeEnum *)HYSTOGRAM;

+ (DXStudyPlotTypeEnum *)POINTS;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStudyPlotTypeEnum *)change;

- (DXStudyPlotTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStudyPlotTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStudyPlotTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXStudyPlotTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStudyPlotTypeEnum)

inline DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTypeEnum, UNDEFINED, DXStudyPlotTypeEnum *)

inline DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_get_BASELINE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_BASELINE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTypeEnum, BASELINE, DXStudyPlotTypeEnum *)

inline DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_get_LINE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_LINE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTypeEnum, LINE, DXStudyPlotTypeEnum *)

inline DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_get_HYSTOGRAM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_HYSTOGRAM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTypeEnum, HYSTOGRAM, DXStudyPlotTypeEnum *)

inline DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_get_POINTS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_POINTS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTypeEnum, POINTS, DXStudyPlotTypeEnum *)

FOUNDATION_EXPORT void DXStudyPlotTypeEnum_initWithNSString_withInt_(DXStudyPlotTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStudyPlotTypeEnum *new_DXStudyPlotTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyPlotTypeEnum *create_DXStudyPlotTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStudyPlotTypeEnum_init(DXStudyPlotTypeEnum *self);

FOUNDATION_EXPORT DXStudyPlotTypeEnum *new_DXStudyPlotTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyPlotTypeEnum *create_DXStudyPlotTypeEnum_init(void);

FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStudyPlotTypeEnum *DXStudyPlotTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStudyPlotTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyPlotTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum DXStudyPlotTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTypeEnum")
