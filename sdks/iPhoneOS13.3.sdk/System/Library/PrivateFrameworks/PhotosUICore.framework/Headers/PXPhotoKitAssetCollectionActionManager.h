//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXAssetCollectionActionManager.h>

#import <PhotosUICore/PXActivityActionDelegate-Protocol.h>

@class NSDictionary, NSMapTable, PXAssetCollectionActionPerformer;

@interface PXPhotoKitAssetCollectionActionManager : PXAssetCollectionActionManager <PXActivityActionDelegate>
{
    NSMapTable *__actionTypeByBarButtonItem;
    NSDictionary *__performerClassesByType;
    PXAssetCollectionActionPerformer *__activePerformer;
}

@property(retain, nonatomic, setter=_setActivePerformer:) PXAssetCollectionActionPerformer *_activePerformer; // @synthesize _activePerformer=__activePerformer;
@property(readonly, nonatomic) NSDictionary *_performerClassesByType; // @synthesize _performerClassesByType=__performerClassesByType;
@property(readonly, nonatomic) NSMapTable *_actionTypeByBarButtonItem; // @synthesize _actionTypeByBarButtonItem=__actionTypeByBarButtonItem;
// - (void).cxx_destruct;
- (void)performActivity:(id)arg1;
- (BOOL)canPerformWithActivityItems:(id)arg1 forActivity:(id)arg2;
- (void)_handleActionPerformerComplete:(id)arg1 success:(BOOL)arg2 error:(id)arg3;
- (void)_executeActionTypeIfPossible:(id)arg1;
- (void)_handleBarButtonItem:(id)arg1;
- (id)activityForActionType:(id)arg1;
- (id)alertActionForActionType:(id)arg1;
- (id)barButtonItemForActionType:(id)arg1;
- (Class)_firstPossiblePerformerForActionType:(id)arg1;
- (id)systemImageNameForActionType:(id)arg1;
- (id)localizedTitleForActionType:(id)arg1 useCase:(NSUInteger)arg2;
- (id)actionPerformerForActionType:(id)arg1;
- (BOOL)canPerformActionType:(id)arg1;
- (id)initWithAssetCollection:(id)arg1 displayTitleInfo:(id)arg2;

@end

