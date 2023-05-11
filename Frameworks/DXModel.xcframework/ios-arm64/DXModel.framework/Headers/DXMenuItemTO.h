
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuItemTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuItemTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTO || defined(INCLUDE_DXMenuItemTO))
#define DXMenuItemTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXMenuItemDisplayTypeEnum;
@class DXMenuItemTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMenuItemTO : PSBaseTransferObject
@property (readonly, class, strong) DXMenuItemTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMenuItemTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMenuItemTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMenuItemTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXMenuItemDisplayTypeEnum *)getDisplayType;

- (NSString *)getName;

- (DXMenuItemTypeEnum *)getType;

- (NSString *)getUrl;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setDisplayTypeWithDXMenuItemDisplayTypeEnum:(DXMenuItemDisplayTypeEnum *)displayType;

- (void)setNameWithNSString:(NSString *)name;

- (void)setTypeWithDXMenuItemTypeEnum:(DXMenuItemTypeEnum *)type;

- (void)setUrlWithNSString:(NSString *)url;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMenuItemTO)

inline DXMenuItemTO *DXMenuItemTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuItemTO *DXMenuItemTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuItemTO, EMPTY, DXMenuItemTO *)

FOUNDATION_EXPORT void DXMenuItemTO_init(DXMenuItemTO *self);

FOUNDATION_EXPORT DXMenuItemTO *new_DXMenuItemTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuItemTO *create_DXMenuItemTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuItemTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuItemTO DXMenuItemTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuItemTO")
