
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuThemeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuThemeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuThemeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuThemeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuThemeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXThemeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuThemeEnum || defined(INCLUDE_DXThemeEnum))
#define DXThemeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXThemeEnum : PSBaseEnum
@property (readonly, class, strong) DXThemeEnum *DARK NS_SWIFT_NAME(DARK);
@property (readonly, class, strong) DXThemeEnum *LIGHT NS_SWIFT_NAME(LIGHT);

+ (DXThemeEnum *)DARK;

+ (DXThemeEnum *)LIGHT;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXThemeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXThemeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXThemeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXThemeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXThemeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXThemeEnum)

inline DXThemeEnum *DXThemeEnum_get_DARK(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXThemeEnum *DXThemeEnum_DARK;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXThemeEnum, DARK, DXThemeEnum *)

inline DXThemeEnum *DXThemeEnum_get_LIGHT(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXThemeEnum *DXThemeEnum_LIGHT;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXThemeEnum, LIGHT, DXThemeEnum *)

FOUNDATION_EXPORT void DXThemeEnum_initWithNSString_withInt_(DXThemeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXThemeEnum *new_DXThemeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXThemeEnum *create_DXThemeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXThemeEnum_init(DXThemeEnum *self);

FOUNDATION_EXPORT DXThemeEnum *new_DXThemeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXThemeEnum *create_DXThemeEnum_init(void);

FOUNDATION_EXPORT DXThemeEnum *DXThemeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXThemeEnum *DXThemeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXThemeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXThemeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuThemeEnum DXThemeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuThemeEnum")
