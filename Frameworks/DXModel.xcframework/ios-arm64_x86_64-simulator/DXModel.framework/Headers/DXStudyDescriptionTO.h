
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyDescriptionTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO || defined(INCLUDE_DXStudyDescriptionTO))
#define DXStudyDescriptionTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXStudyParameterRangeTO;
@class DXStudyPlotTO;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@class PSListTO;
@protocol PSTransferObject;

@interface DXStudyDescriptionTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyDescriptionTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudyDescriptionTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (void)addParameterWithDXStudyParameterRangeTO:(DXStudyParameterRangeTO *)parameter;

- (void)addPlotWithDXStudyPlotTO:(DXStudyPlotTO *)plot;

- (DXStudyDescriptionTO *)change;

- (DXStudyParameterRangeTO *)changeParameterWithInt:(jint)index;

- (DXStudyPlotTO *)changePlotWithInt:(jint)index;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyDescriptionTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (NSString *)getFullName;

- (NSString *)getLocalizedFullName;

- (NSString *)getLocalizedName;

- (NSString *)getName;

- (PSListTO *)getParameterRanges;

- (PSListTO *)getPlots;

- (NSUInteger)hash;

- (jboolean)isOverlaying;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setFullNameWithNSString:(NSString *)fullName;

- (void)setLocalizedFullNameWithNSString:(NSString *)localizedFullName;

- (void)setLocalizedNameWithNSString:(NSString *)localizedName;

- (void)setNameWithNSString:(NSString *)name;

- (void)setOverlayingWithBoolean:(jboolean)overlaying;

- (void)setParameterRangesWithPSListTO:(PSListTO *)parameterRanges;

- (void)setPlotsWithPSListTO:(PSListTO *)plots;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyDescriptionTO)

inline DXStudyDescriptionTO *DXStudyDescriptionTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyDescriptionTO *DXStudyDescriptionTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyDescriptionTO, EMPTY, DXStudyDescriptionTO *)

FOUNDATION_EXPORT void DXStudyDescriptionTO_init(DXStudyDescriptionTO *self);

FOUNDATION_EXPORT DXStudyDescriptionTO *new_DXStudyDescriptionTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyDescriptionTO *create_DXStudyDescriptionTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyDescriptionTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO DXStudyDescriptionTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyDescriptionTO")
