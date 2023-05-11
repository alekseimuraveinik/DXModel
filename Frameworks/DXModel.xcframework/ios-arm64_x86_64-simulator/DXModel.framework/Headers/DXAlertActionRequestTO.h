
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertActionRequestTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO || defined(INCLUDE_DXAlertActionRequestTO))
#define DXAlertActionRequestTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXAlertActionEnum;
@class DXAlertTemplateTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol DXAlertActionRequestVisitor;
@protocol PSTransferObject;

@interface DXAlertActionRequestTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertActionRequestTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertActionRequestTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertActionRequestTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertActionRequestTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (DXAlertActionEnum *)getAlertActionType;

- (jlong)getAlertId;

- (DXAlertTemplateTO *)getAlertTemplateTO;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setAlertActionTypeWithDXAlertActionEnum:(DXAlertActionEnum *)alertActionType;

- (void)setAlertIdWithLong:(jlong)alertId;

- (void)setAlertTemplateTOWithDXAlertTemplateTO:(DXAlertTemplateTO *)alertTemplateTO;

- (NSString *)description;

- (void)visitByWithDXAlertActionRequestVisitor:(id<DXAlertActionRequestVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertActionRequestTO)

inline DXAlertActionRequestTO *DXAlertActionRequestTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertActionRequestTO *DXAlertActionRequestTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertActionRequestTO, EMPTY, DXAlertActionRequestTO *)

FOUNDATION_EXPORT void DXAlertActionRequestTO_init(DXAlertActionRequestTO *self);

FOUNDATION_EXPORT DXAlertActionRequestTO *new_DXAlertActionRequestTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertActionRequestTO *create_DXAlertActionRequestTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertActionRequestTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO DXAlertActionRequestTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertActionsAlertActionRequestTO")
