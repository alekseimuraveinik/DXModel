
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXOrderEditorParametersTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO || defined(INCLUDE_DXOrderEditorParametersTO))
#define DXOrderEditorParametersTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXAccountKeyTO;
@class DXOrderExpirationEnum;
@class DXRiskyOrderAdditionalParametersTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXOrderEditorParametersTO : PSBaseTransferObject
@property (readonly, class, strong) DXOrderEditorParametersTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXOrderEditorParametersTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXOrderEditorParametersTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXOrderEditorParametersTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (DXAccountKeyTO *)getAccountKey;

- (DXRiskyOrderAdditionalParametersTO *)getAdditionalParameters;

- (DXOrderExpirationEnum *)getExpiration;

- (jlong)getExpireAt;

- (NSString *)getSymbol;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setAccountKeyWithDXAccountKeyTO:(DXAccountKeyTO *)accountKey;

- (void)setAdditionalParametersWithDXRiskyOrderAdditionalParametersTO:(DXRiskyOrderAdditionalParametersTO *)additionalParameters;

- (void)setExpirationWithDXOrderExpirationEnum:(DXOrderExpirationEnum *)expiration;

- (void)setExpireAtWithLong:(jlong)expireAt;

- (void)setSymbolWithNSString:(NSString *)symbol;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXOrderEditorParametersTO)

inline DXOrderEditorParametersTO *DXOrderEditorParametersTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXOrderEditorParametersTO *DXOrderEditorParametersTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXOrderEditorParametersTO, EMPTY, DXOrderEditorParametersTO *)

FOUNDATION_EXPORT void DXOrderEditorParametersTO_init(DXOrderEditorParametersTO *self);

FOUNDATION_EXPORT DXOrderEditorParametersTO *new_DXOrderEditorParametersTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXOrderEditorParametersTO *create_DXOrderEditorParametersTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXOrderEditorParametersTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO DXOrderEditorParametersTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiEditorOrderEditorParametersTO")
