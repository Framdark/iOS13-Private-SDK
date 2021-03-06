//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//


@class CKFeedCollectionViewLayout, NSIndexPath, NSIndexSet, UICollectionView;

@protocol CKFeedCollectionViewLayoutDelegate <UICollectionViewDelegate>
- (double)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 spacingBetweenSection:(long long)arg3 andHeaderForGroupID:(id)arg4;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 headerSizeForGroupID:(id)arg3 proposedSize:(CGSize)arg4;
- (id)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 groupIDForSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenSection:(long long)arg3 andSection:(long long)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForFooterInSection:(long long)arg3 proposedSize:(CGSize)arg4;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForHeaderOfSections:(NSIndexSet *)arg3 proposedSize:(CGSize)arg4;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldHideHeaderInSection:(long long)arg3;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldJoinSection:(long long)arg3 withSection:(long long)arg4;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForThumbnailInSection:(long long)arg3;
- (struct CKFeedSeparatorMetrics)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 metricsForSeparatorBetweenRowAtIndexPath:(NSIndexPath *)arg3 andRowAtIndexPath:(NSIndexPath *)arg4 proposedMetrics:(struct CKFeedSeparatorMetrics)arg5;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 sizeForRowAtIndexPath:(NSIndexPath *)arg3 proposedSize:(CGSize)arg4;
- (void)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 referenceMaximumLength:(double )arg3 minimumNumberOfTilesToOmit:(long long )arg4 forSection:(long long)arg5;
- (id)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 batchIDForTileAtIndexPath:(NSIndexPath *)arg3;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 captionSizeForTileAtIndexPath:(NSIndexPath *)arg3 proposedSize:(CGSize)arg4;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldShowCaptionForTileAtIndexPath:(NSIndexPath *)arg3;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 mininumSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (CGSize)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 imageSizeForTileAtIndexPath:(NSIndexPath *)arg3;
- (UIEdgeInsets)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 contentInsetsForSection:(long long)arg3;
- (long long)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 typeForSection:(long long)arg3;
- (BOOL)collectionView:(UICollectionView *)arg1 layout:(CKFeedCollectionViewLayout *)arg2 shouldHideSection:(long long)arg3;
@end

