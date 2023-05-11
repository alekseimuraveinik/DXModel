
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuItemDisplayTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum || defined(INCLUDE_DXMenuItemDisplayTypeEnum))
#define DXMenuItemDisplayTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXMenuItemDisplayTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXMenuItemDisplayTypeEnum *PRIMARY_BUTTON NS_SWIFT_NAME(PRIMARY_BUTTON);
@property (readonly, class, strong) DXMenuItemDisplayTypeEnum *MENU_ITEM NS_SWIFT_NAME(MENU_ITEM);

+ (DXMenuItemDisplayTypeEnum *)PRIMARY_BUTTON;

+ (DXMenuItemDisplayTypeEnum *)MENU_ITEM;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXMenuItemDisplayTypeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMenuItemDisplayTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXMenuItemDisplayTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXMenuItemDisplayTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXMenuItemDisplayTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXMenuItemDisplayTypeEnum)

inline DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_get_PRIMARY_BUTTON(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_PRIMARY_BUTTON;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemDisplayTypeEnum, PRIMARY_BUTTON, DXMenuItemDisplayTypeEnum *)

inline DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_get_MENU_ITEM(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_MENU_ITEM;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemDisplayTypeEnum, MENU_ITEM, DXMenuItemDisplayTypeEnum *)

FOUNDATION_EXPORT void DXMenuItemDisplayTypeEnum_initWithNSString_withInt_(DXMenuItemDisplayTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *new_DXMenuItemDisplayTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *create_DXMenuItemDisplayTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXMenuItemDisplayTypeEnum_init(DXMenuItemDisplayTypeEnum *self);

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *new_DXMenuItemDisplayTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *create_DXMenuItemDisplayTypeEnum_init(void);

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMenuItemDisplayTypeEnum *DXMenuItemDisplayTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXMenuItemDisplayTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuItemDisplayTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum DXMenuItemDisplayTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemDisplayTypeEnum")
