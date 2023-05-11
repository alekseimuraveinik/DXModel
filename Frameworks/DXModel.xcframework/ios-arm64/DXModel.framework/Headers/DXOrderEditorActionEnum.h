
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorActionEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum || defined(INCLUDE_DXOrderEditorActionEnum))
#define DXOrderEditorActionEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXOrderEditorActionEnum : PSBaseEnum
@property (readonly, class, strong) DXOrderEditorActionEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXOrderEditorActionEnum *VALIDATE NS_SWIFT_NAME(VALIDATE);
@property (readonly, class, strong) DXOrderEditorActionEnum *ISSUE NS_SWIFT_NAME(ISSUE);
@property (readonly, class, strong) DXOrderEditorActionEnum *CHANGE_VALIDATION_PARAMS NS_SWIFT_NAME(CHANGE_VALIDATION_PARAMS);

+ (DXOrderEditorActionEnum *)UNDEFINED;

+ (DXOrderEditorActionEnum *)VALIDATE;

+ (DXOrderEditorActionEnum *)ISSUE;

+ (DXOrderEditorActionEnum *)CHANGE_VALIDATION_PARAMS;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXOrderEditorActionEnum *)change;

- (DXOrderEditorActionEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXOrderEditorActionEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXOrderEditorActionEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXOrderEditorActionEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXOrderEditorActionEnum)

inline DXOrderEditorActionEnum *DXOrderEditorActionEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorActionEnum, UNDEFINED, DXOrderEditorActionEnum *)

inline DXOrderEditorActionEnum *DXOrderEditorActionEnum_get_VALIDATE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_VALIDATE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorActionEnum, VALIDATE, DXOrderEditorActionEnum *)

inline DXOrderEditorActionEnum *DXOrderEditorActionEnum_get_ISSUE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_ISSUE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorActionEnum, ISSUE, DXOrderEditorActionEnum *)

inline DXOrderEditorActionEnum *DXOrderEditorActionEnum_get_CHANGE_VALIDATION_PARAMS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_CHANGE_VALIDATION_PARAMS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorActionEnum, CHANGE_VALIDATION_PARAMS, DXOrderEditorActionEnum *)

FOUNDATION_EXPORT void DXOrderEditorActionEnum_initWithNSString_withInt_(DXOrderEditorActionEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXOrderEditorActionEnum *new_DXOrderEditorActionEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorActionEnum *create_DXOrderEditorActionEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXOrderEditorActionEnum_init(DXOrderEditorActionEnum *self);

FOUNDATION_EXPORT DXOrderEditorActionEnum *new_DXOrderEditorActionEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorActionEnum *create_DXOrderEditorActionEnum_init(void);

FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXOrderEditorActionEnum *DXOrderEditorActionEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXOrderEditorActionEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorActionEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum DXOrderEditorActionEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorActionEnum")
