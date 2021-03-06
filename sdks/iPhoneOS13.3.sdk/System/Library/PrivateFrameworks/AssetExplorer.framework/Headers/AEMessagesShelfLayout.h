//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetsTilingLayout.h>

@protocol AEMessagesShelfLayoutDelegate;

@interface AEMessagesShelfLayout : PXAssetsTilingLayout
{
    CGRect _itemFramesForCurrentDataSource;
    double _currentContentWidth;
    BOOL _wasPreparedAtLeastOnce;
    id <AEMessagesShelfLayoutDelegate> _delegate;
}

@property(nonatomic) __weak id <AEMessagesShelfLayoutDelegate> delegate; // @synthesize delegate=_delegate;
// - (void).cxx_destruct;
- (CGRect)_videoDurationFrameForItemFrame:(CGRect)arg1;
- (CGRect)_videoBadgeFrameForItemFrame:(CGRect)arg1;
- (CGRect)_loopBadgeFrameForItemFrame:(CGRect)arg1;
- (CGRect)_gradientShadowFrameForItemFrame:(CGRect)arg1;
- (CGRect)_irisToggleFrameForGridFrame:(CGRect)arg1;
- (CGRect)_cancelButtonFrameForGridFrame:(CGRect)arg1;
- (CGRect)_frameForGridItemAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (double)_zPositionForShelfTileKind:(NSUInteger)arg1 atIndexPath:(struct PXSimpleIndexPath)arg2;
- (void)prepareLayout;
- (BOOL)getGeometry:(struct PXTileGeometry )arg1 group:(NSUInteger )arg2 userData:(id )arg3 forTileWithIdentifier:(struct PXTileIdentifier)arg4;
- (void)enumerateTilesInRect:(CGRect)arg1 withOptions:(id)arg2 usingBlock:(id /* CDUnknownBlockType */)arg3;
- (CGRect)contentBounds;
- (void)setReferenceSize:(CGSize)arg1;
- (void)dealloc;

@end

