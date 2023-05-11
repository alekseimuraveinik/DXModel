
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO")
#ifdef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO 0
#else
#define INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO 1
#endif
#undef RESTRICT_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXStudyPlotTO_) && (INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO || defined(INCLUDE_DXStudyPlotTO))
#define DXStudyPlotTO_

#define RESTRICT_ComDevexpertsPipestoneCommonApiBaseTransferObject 1
#define INCLUDE_PSBaseTransferObject 1
#include "PSBaseTransferObject.h"

@class DXStudyPlotTypeEnum;
@class PSCustomInputStream;
@class PSCustomOutputStream;
@protocol PSTransferObject;

@interface DXStudyPlotTO : PSBaseTransferObject
@property (readonly, class, strong) DXStudyPlotTO *EMPTY NS_SWIFT_NAME(EMPTY);

+ (DXStudyPlotTO *)EMPTY;

#pragma mark Public

- (instancetype __nonnull)init;

- (DXStudyPlotTO *)change;

- (void)deserializeWithPSCustomInputStream:(PSCustomInputStream *)is;

- (DXStudyPlotTO *)diffWithPSTransferObject:(id<PSTransferObject>)base;

- (jboolean)isEqual:(id)o;

- (jint)getColor;

- (NSString *)getLocalizedName;

- (NSString *)getName;

- (jint)getShift;

- (DXStudyPlotTypeEnum *)getType;

- (NSUInteger)hash;

- (jboolean)makeReadOnly;

- (void)serializeWithPSCustomOutputStream:(PSCustomOutputStream *)os;

- (void)setColorWithInt:(jint)color;

- (void)setLocalizedNameWithNSString:(NSString *)localizedName;

- (void)setNameWithNSString:(NSString *)name;

- (void)setShiftWithInt:(jint)shift;

- (void)setTypeWithDXStudyPlotTypeEnum:(DXStudyPlotTypeEnum *)type;

- (NSString *)description;

#pragma mark Protected

- (void)applyPatchWithPSBaseTransferObject:(PSBaseTransferObject *)base;

- (jboolean)canEqualWithId:(id)other;

- (void)createPatchWithPSTransferObject:(id<PSTransferObject>)base
                   withPSTransferObject:(id<PSTransferObject>)destination;

@end

J2OBJC_STATIC_INIT(DXStudyPlotTO)

inline DXStudyPlotTO *DXStudyPlotTO_get_EMPTY(void);
/*! INTERNAL ONLY - Use accessor function from above. */
FOUNDATION_EXPORT DXStudyPlotTO *DXStudyPlotTO_EMPTY;
J2OBJC_STATIC_FIELD_OBJ_FINAL(DXStudyPlotTO, EMPTY, DXStudyPlotTO *)

FOUNDATION_EXPORT void DXStudyPlotTO_init(DXStudyPlotTO *self);

FOUNDATION_EXPORT DXStudyPlotTO *new_DXStudyPlotTO_init(void) NS_RETURNS_RETAINED;

FOUNDATION_EXPORT DXStudyPlotTO *create_DXStudyPlotTO_init(void);

J2OBJC_TYPE_LITERAL_HEADER(DXStudyPlotTO)

@compatibility_alias ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO DXStudyPlotTO;

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsMobileDxplatformApiStudiesStudyPlotTO")
