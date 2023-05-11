
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO || defined(INCLUDE_DXMenuRequestTO))
#define DXMenuRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXThemeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXMenuRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXMenuRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMenuRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMenuRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMenuRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXThemeEnum *)getTheme;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setThemeWithDXThemeEnum:(DXThemeEnum *)theme;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMenuRequestTO)

inline DXMenuRequestTO *DXMenuRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuRequestTO *DXMenuRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuRequestTO, EMPTY, DXMenuRequestTO *)

FOUNDATION_EXPORT void DXMenuRequestTO_init(DXMenuRequestTO *self);

FOUNDATION_EXPORT DXMenuRequestTO *new_DXMenuRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuRequestTO *create_DXMenuRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuRequestTO DXMenuRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuRequestTO")
