//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICRequestOperation.h>

@class ICMediaApplicationBannerSyncResponse, ICStoreRequestContext;

@interface ICMediaApplicationBannerRestoreRequest : ICRequestOperation
{
    ICStoreRequestContext *_storeRequestContext;
    ICMediaApplicationBannerSyncResponse *_response;
}

// - (void).cxx_destruct;
- (void)execute;
- (void)performRequestWithResponseHandler:(id /* CDUnknownBlockType */)arg1;
- (id)initWithStoreRequestContext:(id)arg1;

@end

