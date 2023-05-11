
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETRiskyOrderAdditionalParameters_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters || defined(INCLUDE_DXMARKETRiskyOrderAdditionalParameters))
#define DXMARKETRiskyOrderAdditionalParameters_

@class DXRiskyOrderAdditionalParametersTO;

@interface DXMARKETRiskyOrderAdditionalParameters : NSObject

#pragma mark Public

- (instancetype __nonnull)init;

- (NSString *)getConfirmationReply;

- (NSString *)getConfirmationText;

- (id)getTradeCost;

- (jboolean)isConfirmationWasRequested;

- (void)setConfirmationReplyWithNSString:(NSString *)confirmationReply;

- (void)setConfirmationTextWithNSString:(NSString *)confirmationText;

- (void)setConfirmationWasRequestedWithBoolean:(jboolean)confirmationWasRequested;

- (void)setTradeCostWithId:(id)tradeCost;

#pragma mark Package-Private

- (DXRiskyOrderAdditionalParametersTO *)asTransferObject;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETRiskyOrderAdditionalParameters)

FOUNDATION_EXPORT void DXMARKETRiskyOrderAdditionalParameters_init(DXMARKETRiskyOrderAdditionalParameters *self);

FOUNDATION_EXPORT DXMARKETRiskyOrderAdditionalParameters *new_DXMARKETRiskyOrderAdditionalParameters_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXMARKETRiskyOrderAdditionalParameters *create_DXMARKETRiskyOrderAdditionalParameters_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETRiskyOrderAdditionalParameters)

@compatibility_alias ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters DXMARKETRiskyOrderAdditionalParameters;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelOrderBaseRiskyOrderAdditionalParameters")
