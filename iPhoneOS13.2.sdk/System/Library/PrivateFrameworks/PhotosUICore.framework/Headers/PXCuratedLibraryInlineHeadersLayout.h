//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXGSplitLayout.h>

#import <PhotosUICore/PXSectionedDataSourceManagerObserver-Protocol.h>

@class NSString, PXCuratedLibraryInlineHeadersDataSourceManager, PXCuratedLibraryInlineHeadersLayoutSpec, PXInlineHeadersSpriteLayout;
@protocol PXCuratedLibraryInlineHeadersLayoutGeometrySource;

@interface PXCuratedLibraryInlineHeadersLayout : PXGSplitLayout <PXSectionedDataSourceManagerObserver>
{
    CDStruct_d97c9657 _updateFlags;
    PXInlineHeadersSpriteLayout *_yearsLayout;
    PXInlineHeadersSpriteLayout *_monthsLayout;
    PXCuratedLibraryInlineHeadersDataSourceManager *_dataSourceManager;
    PXCuratedLibraryInlineHeadersLayoutSpec *_spec;
    id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> _geometrySource;
}

@property(nonatomic) __weak id <PXCuratedLibraryInlineHeadersLayoutGeometrySource> geometrySource; // @synthesize geometrySource=_geometrySource;
@property(retain, nonatomic) PXCuratedLibraryInlineHeadersLayoutSpec *spec; // @synthesize spec=_spec;
@property(readonly, nonatomic) PXCuratedLibraryInlineHeadersDataSourceManager *dataSourceManager; // @synthesize dataSourceManager=_dataSourceManager;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;
- (void)_updateSublayouts;
- (void)update;
- (void)invalidateAnchorItemFrames;
@property(nonatomic) double monthsAlpha;
@property(nonatomic) double yearsAlpha;
- (id)initWithDataSourceManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) NSUInteger hash;
@property(readonly) Class superclass;

@end
