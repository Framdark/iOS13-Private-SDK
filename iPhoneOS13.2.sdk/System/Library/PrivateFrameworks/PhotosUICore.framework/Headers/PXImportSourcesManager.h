//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PHImportControllerObserver-Protocol.h>
#import <PhotosUICore/PHImportSourceObserver-Protocol.h>

@class NSArray, NSMutableArray, PHImportController, PHImportSource;

@interface PXImportSourcesManager : PXObservable <PHImportControllerObserver, PHImportSourceObserver>
{
    NSMutableArray *_importSources;
    PHImportSource *_URLImportSource;
    PHImportController *_importController;
}

+ (id)sharedController;
@property(readonly, nonatomic) PHImportController *importController; // @synthesize importController=_importController;
- (void)capabilitiesDidChangeForImportSource:(id)arg1;
- (void)nameDidChangeForImportSource:(id)arg1;
- (void)userHasTrustedHostForImportSource:(id)arg1;
- (void)userRequiredToTrustHostForImportSource:(id)arg1;
- (void)importSource:(id)arg1 didDeleteAsset:(id)arg2;
- (void)importSource:(id)arg1 didUpdateAsset:(id)arg2 propertyMask:(unsigned short)arg3;
- (void)importSource:(id)arg1 didRemoveAssets:(id)arg2;
- (void)importSource:(id)arg1 didAddAssets:(id)arg2;
- (void)importController:(id)arg1 removedImportSource:(id)arg2;
- (void)importController:(id)arg1 addedImportSource:(id)arg2;
- (id)updateImportSourceForURLs:(id)arg1;
@property(readonly, nonatomic) NSArray *importSources;
- (void)_notifyObserversDidRemoveImportSource:(id)arg1;
- (void)_notifyObserversDidUpdateImportSource:(id)arg1;
- (void)_notifyObserversDidAddImportSource:(id)arg1;
- (id)init;

@end
