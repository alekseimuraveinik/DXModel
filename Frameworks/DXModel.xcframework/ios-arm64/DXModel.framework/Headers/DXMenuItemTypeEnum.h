
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuItemTypeEnum_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum || defined(INCLUDE_DXMenuItemTypeEnum))
#define DXMenuItemTypeEnum_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseEnum 1
#define INCLUDE_PSBaseEnum 1
#include "PSBaseEnum.h"

@class PSBaseTransferObject;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol JavaUtilList;
@protocol PSTransferObject;

@interface DXMenuItemTypeEnum : PSBaseEnum
@property (readonly, class, strong) DXMenuItemTypeEnum *IN_APP NS_SWIFT_NAME(IN_APP);
@property (readonly, class, strong) DXMenuItemTypeEnum *INTERNAL_WEB NS_SWIFT_NAME(INTERNAL_WEB);
@property (readonly, class, strong) DXMenuItemTypeEnum *EXTERNAL_WEB NS_SWIFT_NAME(EXTERNAL_WEB);
@property (readonly, class, strong) DXMenuItemTypeEnum *SEPARATOR NS_SWIFT_NAME(SEPARATOR);
@property (readonly, class, strong) DXMenuItemTypeEnum *TITLE NS_SWIFT_NAME(TITLE);

+ (DXMenuItemTypeEnum *)IN_APP;

+ (DXMenuItemTypeEnum *)INTERNAL_WEB;

+ (DXMenuItemTypeEnum *)EXTERNAL_WEB;

+ (DXMenuItemTypeEnum *)SEPARATOR;

+ (DXMenuItemTypeEnum *)TITLE;

#pragma mark Public

- (instancetype __nonnull)init;

- (instancetype __nonnull)initWithNSString:(NSString *)name
                                   withInt:(jint)ordinal;

- (DXMenuItemTypeEnum *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMenuItemTypeEnum *)diffWithPSTransferObject:(id<PSTransferObject>)arg0;

- (DXMenuItemTypeEnum *)findByOrdinalWithInt:(jint)ordinal;

+ (DXMenuItemTypeEnum *)getByOrdinalWithInt:(jint)ordinal;

- (PSBaseTransferObject *)java_clone;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

+ (DXMenuItemTypeEnum *)valueOfWithNSString:(NSString *)name;

+ (id<JavaUtilList>)values;

@end

J2OBJC_STATIC_INIT(DXMenuItemTypeEnum)

inline DXMenuItemTypeEnum *DXMenuItemTypeEnum_get_IN_APP(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_IN_APP;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTypeEnum, IN_APP, DXMenuItemTypeEnum *)

inline DXMenuItemTypeEnum *DXMenuItemTypeEnum_get_INTERNAL_WEB(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_INTERNAL_WEB;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTypeEnum, INTERNAL_WEB, DXMenuItemTypeEnum *)

inline DXMenuItemTypeEnum *DXMenuItemTypeEnum_get_EXTERNAL_WEB(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_EXTERNAL_WEB;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTypeEnum, EXTERNAL_WEB, DXMenuItemTypeEnum *)

inline DXMenuItemTypeEnum *DXMenuItemTypeEnum_get_SEPARATOR(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_SEPARATOR;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTypeEnum, SEPARATOR, DXMenuItemTypeEnum *)

inline DXMenuItemTypeEnum *DXMenuItemTypeEnum_get_TITLE(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_TITLE;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTypeEnum, TITLE, DXMenuItemTypeEnum *)

FOUNDATION_EXPORT void DXMenuItemTypeEnum_initWithNSString_withInt_(DXMenuItemTypeEnum *self, NSString *name, jint ordinal);

FOUNDATION_EXPORT DXMenuItemTypeEnum *new_DXMenuItemTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuItemTypeEnum *create_DXMenuItemTypeEnum_initWithNSString_withInt_(NSString *name, jint ordinal);

FOUNDATION_EXPORT void DXMenuItemTypeEnum_init(DXMenuItemTypeEnum *self);

FOUNDATION_EXPORT DXMenuItemTypeEnum *new_DXMenuItemTypeEnum_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuItemTypeEnum *create_DXMenuItemTypeEnum_init(void);

FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_valueOfWithNSString_(NSString *name);

FOUNDATION_EXPORT DXMenuItemTypeEnum *DXMenuItemTypeEnum_getByOrdinalWithInt_(jint ordinal);

FOUNDATION_EXPORT id<JavaUtilList> DXMenuItemTypeEnum_values(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuItemTypeEnum)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum DXMenuItemTypeEnum;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTypeEnum")
