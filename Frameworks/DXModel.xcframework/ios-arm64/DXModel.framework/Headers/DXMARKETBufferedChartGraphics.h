
#include "J2ObjC_header.h"

#pragma push_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics")
#ifdef RESTRICT_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics 0
#else
#define INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics 1
#endif
#undef RESTRICT_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics

#if __has_feature(nullability)
#pragma clang diagnostic push
#pragma GCC diagnostic ignored "-Wnullability"
#pragma GCC diagnostic ignored "-Wnullability-completeness"
#endif

#if !defined (DXMARKETBufferedChartGraphics_) && (INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics || defined(INCLUDE_DXMARKETBufferedChartGraphics))
#define DXMARKETBufferedChartGraphics_

#define RESTRICT_ComDevexpertsDxmarketClientModelChartChartGraphics 1
#define INCLUDE_DXMARKETChartGraphics 1
#include "DXMARKETChartGraphics.h"

@protocol DXMARKETBufferedChartGraphics < DXMARKETChartGraphics, JavaObject >

- (void)paintWithId:(id)graphics
            withInt:(jint)destX
            withInt:(jint)destY
            withInt:(jint)sourceX
            withInt:(jint)sourceY
            withInt:(jint)w
            withInt:(jint)h;

- (void)dispose;

- (jboolean)isDisposed;

@end

J2OBJC_EMPTY_STATIC_INIT(DXMARKETBufferedChartGraphics)

J2OBJC_TYPE_LITERAL_HEADER(DXMARKETBufferedChartGraphics)

#define ComDevexpertsDxmarketClientModelChartBufferedChartGraphics DXMARKETBufferedChartGraphics

#endif


#if __has_feature(nullability)
#pragma clang diagnostic pop
#endif
#pragma pop_macro("INCLUDE_ALL_ComDevexpertsDxmarketClientModelChartBufferedChartGraphics")
