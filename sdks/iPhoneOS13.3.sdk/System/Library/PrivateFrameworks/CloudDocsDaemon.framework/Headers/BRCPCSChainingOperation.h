//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsDaemon/_BRCOperation.h>

#import <CloudDocsDaemon/BRCOperationSubclass-Protocol.h>

@class BRCAppLibrary, BRCServerItem;

__attribute__((visibility("hidden")))
@interface BRCPCSChainingOperation : _BRCOperation <BRCOperationSubclass>
{
    BRCAppLibrary *_appLibrary;
    BRCServerItem *_rootItem;
    BOOL _completed;
    NSUInteger _batchSize;
    BOOL _shouldFillBatch;
    id /* CDUnknownBlockType */ _pcsChainCompletionBlock;
}

@property(nonatomic) BOOL shouldFillBatch; // @synthesize shouldFillBatch=_shouldFillBatch;
@property(copy, nonatomic) id /* CDUnknownBlockType */ pcsChainCompletionBlock; // @synthesize pcsChainCompletionBlock=_pcsChainCompletionBlock;
// - (void).cxx_destruct;
- (void)main;
- (void)_sendRecordBatch:(id)arg1 recursed:(BOOL)arg2 completion:(id /* CDUnknownBlockType */)arg3;
- (void)_sendRecordBatch:(id)arg1 completion:(id /* CDUnknownBlockType */)arg2;
- (void)_buildRecordListWithCompletion:(id /* CDUnknownBlockType */)arg1;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)createActivity;
- (BOOL)shouldRetryForError:(id)arg1;
- (id)initWithRootItem:(id)arg1 appLibrary:(id)arg2;

@end

