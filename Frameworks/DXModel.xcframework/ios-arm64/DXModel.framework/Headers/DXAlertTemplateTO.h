
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXAlertTemplateTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO || defined(INCLUDE_DXAlertTemplateTO))
#define DXAlertTemplateTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAlertTypeEnum;
@class DXBooleanOperatorEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol DXAlertTemplateVisitor;
@protocol PSTransferObject;

@interface DXAlertTemplateTO : PSBaseTransferObject
@property (readonly, class, strong) DXAlertTemplateTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXAlertTemplateTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXAlertTemplateTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXAlertTemplateTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAlertTypeEnum *)getAlertType;

- (PSListTO *)getConditions;

- (DXBooleanOperatorEnum *)getConditionsLogic;

- (NSString *)getDescription;

- (jlong)getExpirationTimestamp;

- (NSString *)getExpression;

- (PSListTO *)getNotificationTypes;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAlertTypeWithDXAlertTypeEnum:(DXAlertTypeEnum *)alertType;

- (void)setConditionsWithPSListTO:(PSListTO *)conditions;

- (void)setConditionsLogicWithDXBooleanOperatorEnum:(DXBooleanOperatorEnum *)conditionsLogic;

- (void)setDescriptionWithNSString:(NSString *)description_;

- (void)setExpirationTimestampWithLong:(jlong)expirationTimestamp;

- (void)setExpressionWithNSString:(NSString *)expression;

- (void)setNotificationTypesWithPSListTO:(PSListTO *)notificationTypes;

- (NSString *)description;

- (void)visitByWithDXAlertTemplateVisitor:(id<DXAlertTemplateVisitor>)visitor;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXAlertTemplateTO)

inline DXAlertTemplateTO *DXAlertTemplateTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXAlertTemplateTO *DXAlertTemplateTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXAlertTemplateTO, EMPTY, DXAlertTemplateTO *)

FOUNDATION_EXPORT void DXAlertTemplateTO_init(DXAlertTemplateTO *self);

FOUNDATION_EXPORT DXAlertTemplateTO *new_DXAlertTemplateTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXAlertTemplateTO *create_DXAlertTemplateTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXAlertTemplateTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO DXAlertTemplateTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiAlertAlertTemplateTO")
