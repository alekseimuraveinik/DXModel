
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyParameterTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum || defined(INCLUDE_DXStudyParameterTypeEnum))
#define DXStudyParameterTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXStudyParameterTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXStudyParameterTypeEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXStudyParameterTypeEnum *INTEGER NS_SWIFT_NAME(INTEGER);
@property (readonly, class, strong) DXStudyParameterTypeEnum *DOUBLE NS_SWIFT_NAME(DOUBLE);
@property (readonly, class, strong) DXStudyParameterTypeEnum *PRICE_FIELD NS_SWIFT_NAME(PRICE_FIELD);
@property (readonly, class, strong) DXStudyParameterTypeEnum *STRING NS_SWIFT_NAME(STRING);

+ (DXStudyParameterTypeEnum *)UNDEFINED;

+ (DXStudyParameterTypeEnum *)INTEGER;

+ (DXStudyParameterTypeEnum *)DOUBLE;

+ (DXStudyParameterTypeEnum *)PRICE_FIELD;

+ (DXStudyParameterTypeEnum *)STRING;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXStudyParameterTypeEnum *)change;

- (DXStudyParameterTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXStudyParameterTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXStudyParameterTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXStudyParameterTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXStudyParameterTypeEnum)

inline DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTypeEnum, UNDEFINED, DXStudyParameterTypeEnum *)

inline DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_get_INTEGER(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_INTEGER;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTypeEnum, INTEGER, DXStudyParameterTypeEnum *)

inline DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_get_DOUBLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_DOUBLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTypeEnum, DOUBLE, DXStudyParameterTypeEnum *)

inline DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_get_PRICE_FIELD(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_PRICE_FIELD;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTypeEnum, PRICE_FIELD, DXStudyParameterTypeEnum *)

inline DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_get_STRING(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_STRING;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyParameterTypeEnum, STRING, DXStudyParameterTypeEnum *)

FOUNDATION_EXPORT void DXStudyParameterTypeEnum_initWithNSString_withInt_(DXStudyParameterTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXStudyParameterTypeEnum *new_DXStudyParameterTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterTypeEnum *create_DXStudyParameterTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXStudyParameterTypeEnum_init(DXStudyParameterTypeEnum *self);

FOUNDATION_EXPORT DXStudyParameterTypeEnum *new_DXStudyParameterTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyParameterTypeEnum *create_DXStudyParameterTypeEnum_init(void);

FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXStudyParameterTypeEnum *DXStudyParameterTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXStudyParameterTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyParameterTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum DXStudyParameterTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyParameterTypeEnum")
