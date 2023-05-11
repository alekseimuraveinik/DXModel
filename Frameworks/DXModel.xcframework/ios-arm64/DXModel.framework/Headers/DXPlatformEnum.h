
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXPlatformEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum || defined(INCLUDE_DXPlatformEnum))
#define DXPlatformEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXPlatformEnum : PSBaseEnum
@property (readonly, class, strong) DXPlatformEnum *UNDEFINED NS_SWIFT_NAME(UNDEFINED);
@property (readonly, class, strong) DXPlatformEnum *IOS NS_SWIFT_NAME(IOS);
@property (readonly, class, strong) DXPlatformEnum *ANDROID NS_SWIFT_NAME(ANDROID);

+ (DXPlatformEnum *)UNDEFINED;

+ (DXPlatformEnum *)IOS;

+ (DXPlatformEnum *)ANDROID;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXPlatformEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXPlatformEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXPlatformEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXPlatformEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXPlatformEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXPlatformEnum)

inline DXPlatformEnum *DXPlatformEnum_get_UNDEFINED(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformEnum *DXPlatformEnum_UNDEFINED;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformEnum, UNDEFINED, DXPlatformEnum *)

inline DXPlatformEnum *DXPlatformEnum_get_IOS(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformEnum *DXPlatformEnum_IOS;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformEnum, IOS, DXPlatformEnum *)

inline DXPlatformEnum *DXPlatformEnum_get_ANDROID(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXPlatformEnum *DXPlatformEnum_ANDROID;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXPlatformEnum, ANDROID, DXPlatformEnum *)

FOUNDATION_EXPORT void DXPlatformEnum_initWithNSString_withInt_(DXPlatformEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXPlatformEnum *new_DXPlatformEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPlatformEnum *create_DXPlatformEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXPlatformEnum_init(DXPlatformEnum *self);

FOUNDATION_EXPORT DXPlatformEnum *new_DXPlatformEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXPlatformEnum *create_DXPlatformEnum_init(void);

FOUNDATION_EXPORT DXPlatformEnum *DXPlatformEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXPlatformEnum *DXPlatformEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXPlatformEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXPlatformEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiSettingsPlatformEnum DXPlatformEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiSettingsPlatformEnum")
