//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreServices/SSURLBag.h>

@class ISLoadURLBagOperation, ISURLBag, NSMutableArray;

@interface ISSSURLBag : SSURLBag
{
    ISURLBag *_bag;
    NSMutableArray *_completionBlocks;
    BOOL _forceInvalidationForNextLoad;
    ISLoadURLBagOperation *_operation;
}

+ (id)URLBagForContext:(id)arg1;
// - (void).cxx_destruct;
- (void)_finishOperationWithURLBag:(id)arg1 error:(id)arg2;
- (void)_enqueueOperationWithContext:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (id)storeFrontIdentifier;
- (void)loadWithCompletionBlock:(id /* CDUnknownBlockType */)arg1;
- (id)existingBagDictionary;
- (id)valueForKey:(id)arg1 error:(id )arg2;
- (void)loadValueForKey:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;
- (void)invalidate;
- (void)getTrustForURL:(id)arg1 completionBlock:(id /* CDUnknownBlockType */)arg2;

@end

