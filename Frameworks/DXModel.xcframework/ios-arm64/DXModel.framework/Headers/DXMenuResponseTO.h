
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMenuResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO || defined(INCLUDE_DXMenuResponseTO))
#define DXMenuResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXMenuResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXMenuResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXMenuResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXMenuResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXMenuResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getMenuItems;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setMenuItemsWithPSListTO:(PSListTO *)menuItems;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXMenuResponseTO)

inline DXMenuResponseTO *DXMenuResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXMenuResponseTO *DXMenuResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXMenuResponseTO, EMPTY, DXMenuResponseTO *)

FOUNDATION_EXPORT void DXMenuResponseTO_init(DXMenuResponseTO *self);

FOUNDATION_EXPORT DXMenuResponseTO *new_DXMenuResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMenuResponseTO *create_DXMenuResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMenuResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiMenuMenuResponseTO DXMenuResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiMenuMenuResponseTO")
