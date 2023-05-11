
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyParameterRangeTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum || defined(INCLUDE_DXStudyParameterRangeTypeEnum))
#define DXStudyParameterRangeTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStudyParameterRangeTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXStudyParameterRangeTypeEnum *RANGE NS_SWIFT_NAME(RANGE);
@property (readonly, class, strong) DXStudyParameterRangeTypeEnum *RANGE_STEP NS_SWIFT_NAME(RANGE_STEP);
@property (readonly, class, strong) DXStudyParameterRangeTypeEnum *ENUM NS_SWIFT_NAME(ENUM);

+ (DXStudyParameterRangeTypeEnum *)RANGE;

+ (DXStudyParameterRangeTypeEnum *)RANGE_STEP;

+ (DXStudyParameterRangeTypeEnum *)ENUM;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStudyParameterRangeTypeEnum *)change;

- (DXStudyParameterRangeTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStudyParameterRangeTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStudyParameterRangeTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXStudyParameterRangeTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStudyParameterRangeTypeEnum)

inline DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_get_RANGE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_RANGE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterRangeTypeEnum, RANGE, DXStudyParameterRangeTypeEnum *)

inline DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_get_RANGE_STEP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_RANGE_STEP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterRangeTypeEnum, RANGE_STEP, DXStudyParameterRangeTypeEnum *)

inline DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_get_ENUM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_ENUM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterRangeTypeEnum, ENUM, DXStudyParameterRangeTypeEnum *)

FOUNDATION_EXPORT void DXStudyParameterRangeTypeEnum_initWithNSString_withInt_(DXStudyParameterRangeTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *new_DXStudyParameterRangeTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *create_DXStudyParameterRangeTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStudyParameterRangeTypeEnum_init(DXStudyParameterRangeTypeEnum *self);

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *new_DXStudyParameterRangeTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *create_DXStudyParameterRangeTypeEnum_init(void);

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStudyParameterRangeTypeEnum *DXStudyParameterRangeTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStudyParameterRangeTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyParameterRangeTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum DXStudyParameterRangeTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterRangeTypeEnum")
