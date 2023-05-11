
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXUserSettingsEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum || defined(INCLUDE_DXUserSettingsEnum))
#define DXUserSettingsEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXUserSettingsEnum : PSBaseEnum
@property (readonly, class, strong) DXUserSettingsEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXUserSettingsEnum *PUSH_TOKEN NS_SWIFT_NAME(PUSH_TOKEN);

+ (DXUserSettingsEnum *)UNDEFINED;

+ (DXUserSettingsEnum *)PUSH_TOKEN;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXUserSettingsEnum *)change;

- (DXUserSettingsEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXUserSettingsEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXUserSettingsEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

+ (DXUserSettingsEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXUserSettingsEnum)

inline DXUserSettingsEnum *DXUserSettingsEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserSettingsEnum *DXUserSettingsEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserSettingsEnum, UNDEFINED, DXUserSettingsEnum *)

inline DXUserSettingsEnum *DXUserSettingsEnum_get_PUSH_TOKEN(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXUserSettingsEnum *DXUserSettingsEnum_PUSH_TOKEN;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXUserSettingsEnum, PUSH_TOKEN, DXUserSettingsEnum *)

FOUNDATION_EXPORT void DXUserSettingsEnum_initWithNSString_withInt_(DXUserSettingsEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXUserSettingsEnum *new_DXUserSettingsEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserSettingsEnum *create_DXUserSettingsEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXUserSettingsEnum_init(DXUserSettingsEnum *self);

FOUNDATION_EXPORT DXUserSettingsEnum *new_DXUserSettingsEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXUserSettingsEnum *create_DXUserSettingsEnum_init(void);

FOUNDATION_EXPORT DXUserSettingsEnum *DXUserSettingsEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXUserSettingsEnum *DXUserSettingsEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXUserSettingsEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXUserSettingsEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum DXUserSettingsEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsUserSettingsEnum")
