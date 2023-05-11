
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyCloudTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO || defined(INCLUDE_DXStudyCloudTO))
#define DXStudyCloudTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStudyCloudTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyCloudTO *EMPTY NS_SWIFT_NAME(EMPTY);
@property (readonly, class) jint UNDEFINED_PLOT NS_SWIFT_NAME(UNDEFINED_PLOT);

+ (DXStudyCloudTO *)EMPTY;

+ (jint)UNDEFINED_PLOT;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudyCloudTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyCloudTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getLowerPlot;

- (jint)getNegativeColor;

- (jint)getPositiveColor;

- (jint)getUpperPlot;

- (NSUInteger)hash;

- (jboolean)isEmpty;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setLowerPlotWithInt:(jint)lowerPlot;

- (void)setNegativeColorWithInt:(jint)negativeColor;

- (void)setPositiveColorWithInt:(jint)positiveColor;

- (void)setUpperPlotWithInt:(jint)upperPlot;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyCloudTO)

inline DXStudyCloudTO *DXStudyCloudTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyCloudTO *DXStudyCloudTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyCloudTO, EMPTY, DXStudyCloudTO *)

inline jint DXStudyCloudTO_get_UNDEFINED_PLOT(void);
#define DXStudyCloudTO_UNDEFINED_PLOT -1
J2OBJC_STATIC_FIELD_CONSTANT(DXStudyCloudTO, UNDEFINED_PLOT, jint)

FOUNDATION_EXPORT void DXStudyCloudTO_init(DXStudyCloudTO *self);

FOUNDATION_EXPORT DXStudyCloudTO *new_DXStudyCloudTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyCloudTO *create_DXStudyCloudTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyCloudTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO DXStudyCloudTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyCloudTO")
