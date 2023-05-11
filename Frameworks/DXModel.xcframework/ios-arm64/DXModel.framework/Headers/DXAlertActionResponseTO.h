
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionResponseTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO || defined(INCLUDE_DXAlertActionResponseTO))
#define DXAlertActionResponseTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSErrorTO;
@protocol PSTransferObject;

@interface DXAlertActionResponseTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertActionResponseTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertActionResponseTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertActionResponseTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertActionResponseTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSErrorTO *)getError;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setErrorWithPSErrorTO:(PSErrorTO *)error;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertActionResponseTO)

inline DXAlertActionResponseTO *DXAlertActionResponseTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionResponseTO *DXAlertActionResponseTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionResponseTO, EMPTY, DXAlertActionResponseTO *)

FOUNDATION_EXPORT void DXAlertActionResponseTO_init(DXAlertActionResponseTO *self);

FOUNDATION_EXPORT DXAlertActionResponseTO *new_DXAlertActionResponseTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertActionResponseTO *create_DXAlertActionResponseTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionResponseTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO DXAlertActionResponseTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionResponseTO")
