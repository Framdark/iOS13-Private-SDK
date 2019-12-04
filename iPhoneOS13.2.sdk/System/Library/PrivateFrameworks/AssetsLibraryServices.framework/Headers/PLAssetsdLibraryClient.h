//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 15 2018 10:31:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AssetsLibraryServices/PLAssetsdBaseClient.h>

@class NSMutableDictionary;

@interface PLAssetsdLibraryClient : PLAssetsdBaseClient
{
    NSMutableDictionary *_securityScopedURLs;
    // Error parsing type: AB, name: _isOpen
}

- (void)_stopUsingSecurityScopedURLs;
- (_Bool)_consumeSandboxExtensions:(id)arg1;
- (void)pendingEventsForRequest:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)publishRemoteChangeEvent:(id)arg1 delayedSaveActionsDetail:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)automaticallyDeleteEmptyAlbumWithObjectID:(id)arg1 completionHandler:(id /* block */)arg2;
- (_Bool)synchronouslyUpdateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 error:(id *)arg4;
- (void)updateThumbnailsForPhotos:(id)arg1 assignNewIndex:(_Bool)arg2 forceRefresh:(_Bool)arg3 completionHandler:(id /* block */)arg4;
- (id)_assetURIStringsForPhotos:(id)arg1;
- (_Bool)repairSingletonObjectsWithError:(id *)arg1;
- (void)recoverFromCrashIfNeeded;
- (void)importFileSystemAssetsWithCompletionHandler:(id /* block */)arg1;
- (_Bool)synchronouslyImportFileSystemAssetsWithError:(id *)arg1;
- (id)getPhotoLibraryStoreXPCListenerEndpoint;
- (_Bool)shutdownPhotoLibraryDatabaseWithError:(id *)arg1;
- (id)upgradePhotoLibraryDatabaseWithOptions:(unsigned long long)arg1 completion:(id /* block */)arg2;
- (_Bool)openPhotoLibraryDatabaseWithoutProgressIfNeeded:(id *)arg1;
- (_Bool)openPhotoLibraryDatabaseWithPostOpenProgress:(id *)arg1 error:(id *)arg2;
- (_Bool)createPhotoLibraryDatabaseWithError:(id *)arg1;
- (long long)getCurrentModelVersion;
- (void)launchAssetsd;
- (void)dealloc;

@end
