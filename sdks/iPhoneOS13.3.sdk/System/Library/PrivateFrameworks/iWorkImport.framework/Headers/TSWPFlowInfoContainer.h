//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSPObject.h>

#import <iWorkImport/TSWPFlowInfoContainer-Protocol.h>

@class NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPFlowInfoContainer : TSPObject <TSWPFlowInfoContainer>
{
    NSUInteger _nextUserInterfaceIdentifier;
    NSMutableArray *_flowInfos;
}

@property(retain, nonatomic) NSMutableArray *flowInfos; // @synthesize flowInfos=_flowInfos;
@property(nonatomic) NSUInteger nextUserInterfaceIdentifier; // @synthesize nextUserInterfaceIdentifier=_nextUserInterfaceIdentifier;
// - (void).cxx_destruct;
@property(readonly, copy) NSString *debugDescription;
- (void)saveToArchive:(struct FlowInfoContainerArchive )arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromArchive:(const struct FlowInfoContainerArchive )arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)wasRemovedFromDocumentRoot:(id)arg1;
- (void)willBeRemovedFromDocumentRoot:(id)arg1;
- (void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2;
- (void)removeFlowInfo:(id)arg1;
- (void)addFlowInfo:(id)arg1;
- (void)addFlowInfo:(id)arg1 dolcContext:(id)arg2;
- (BOOL)containsFlowInfo:(id)arg1;
- (id)initWithContext:(id)arg1;

@end

