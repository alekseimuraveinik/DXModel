
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyTO || defined(INCLUDE_DXStudyTO))
#define DXStudyTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXStudyTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudyTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudyTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (PSListTO *)getClouds;

- (NSString *)getFullName;

- (NSString *)getLocalizedFullName;

- (NSString *)getLocalizedName;

- (NSString *)getName;

- (PSListTO *)getParameters;

- (PSListTO *)getPlots;

- (NSUInteger)hash;

- (jboolean)isOverlaying;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setCloudsWithPSListTO:(PSListTO *)clouds;

- (void)setFullNameWithNSString:(NSString *)fullName;

- (void)setLocalizedFullNameWithNSString:(NSString *)localizedFullName;

- (void)setLocalizedNameWithNSString:(NSString *)localizedName;

- (void)setNameWithNSString:(NSString *)name;

- (void)setOverlayingWithBoolean:(jboolean)overlaying;

- (void)setParametersWithPSListTO:(PSListTO *)parameters;

- (void)setPlotsWithPSListTO:(PSListTO *)plots;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyTO)

inline DXStudyTO *DXStudyTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyTO *DXStudyTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyTO, EMPTY, DXStudyTO *)

FOUNDATION_EXPORT void DXStudyTO_init(DXStudyTO *self);

FOUNDATION_EXPORT DXStudyTO *new_DXStudyTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyTO *create_DXStudyTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyTO DXStudyTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyTO")
