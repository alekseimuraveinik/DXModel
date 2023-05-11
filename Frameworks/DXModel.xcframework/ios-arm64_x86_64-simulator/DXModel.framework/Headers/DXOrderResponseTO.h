
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO || defined(INCLUDE_DXOrderResponseTO))
#define DXOrderResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXOrderResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getOrders;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setOrdersWithPSListTO:(PSListTO *)orders;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderResponseTO)

inline DXOrderResponseTO *DXOrderResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderResponseTO *DXOrderResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderResponseTO, EMPTY, DXOrderResponseTO *)

FOUNDATION_EXPORT void DXOrderResponseTO_init(DXOrderResponseTO *self);

FOUNDATION_EXPORT DXOrderResponseTO *new_DXOrderResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderResponseTO *create_DXOrderResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiOrderOrderResponseTO DXOrderResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiOrderOrderResponseTO")
