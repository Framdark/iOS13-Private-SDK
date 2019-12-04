//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GameCenterFoundation/GKGame.h>

@interface GKGame (Sharing)
+ (void)removeHistoryForGameWithBundleIdentifier:(id)arg1 completionHandler:(id /* block */)arg2;
+ (void)preloadIconsForGames:(id)arg1 style:(long long)arg2 handler:(id /* block */)arg3;
+ (struct CGSize)serverImageSizeForIconStyle:(long long)arg1;
+ (void)launchAppStoreWithGameCenterGames;
+ (void)gameCenterGamePurchasedWithBundleIdentifier:(id)arg1;
- (void)_gkSetSharingInfo:(id)arg1;
- (id)_gkSharingInfo;
- (id)activityViewControllerOperation:(id)arg1;
- (id)activityViewControllerSubject:(id)arg1;
- (long long)activityViewController:(id)arg1 attachmentULRTypeForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 thumbnailForActivityType:(id)arg2;
- (id)activityViewController:(id)arg1 itemsForActivityType:(id)arg2;
- (id)activityViewControllerPlaceholderItems:(id)arg1;
- (id)fetchSharingInfo;
- (id)logoImageWithMaximumSize:(struct CGSize)arg1;
- (id)loadIconForStyle:(long long)arg1 withCompletionHandler:(id /* block */)arg2;
- (id)loadIconForSize:(struct CGSize)arg1 scale:(double)arg2 withCompletionHandler:(id /* block */)arg3;
- (id)_imageSourceForIconSize:(struct CGSize)arg1;
- (id)URLStringForImageWithShineIfNeeded;
- (id)cachedIconForStyle:(long long)arg1;
- (id)iconForStyle:(long long)arg1;
- (id)imageSourceForIconStyle:(long long)arg1;
- (id)macBrushForIconStyle:(long long)arg1;
- (id)imageSourceForiOSIconStyle:(long long)arg1;
- (id)_imageURLForIconStyle:(long long)arg1;
- (void)productViewControllerDidFinish:(id)arg1;
- (void)launchAppOrPresentStoreSheetFromViewController:(id)arg1;
- (void)presentStoreSheetFromViewController:(id)arg1 context:(id)arg2 completionHandler:(id /* block */)arg3;
@end
