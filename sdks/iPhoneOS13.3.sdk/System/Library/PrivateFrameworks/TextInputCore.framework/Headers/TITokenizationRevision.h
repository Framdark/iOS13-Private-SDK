//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TITokenizationRevision : NSObject
{
    NSUInteger _revisedDocumentLocation;
    NSUInteger _branchedTokenIndex;
    NSUInteger _mergedTokenIndex;
    NSMutableArray *_branchTokens;
    _NSRange _originalSelectedTokenRange;
    struct _TIRevisionHistoryTokenIterator _originalIterator;
}

@property(readonly, nonatomic) NSMutableArray *branchTokens; // @synthesize branchTokens=_branchTokens;
@property(nonatomic) NSUInteger mergedTokenIndex; // @synthesize mergedTokenIndex=_mergedTokenIndex;
@property(nonatomic) NSUInteger branchedTokenIndex; // @synthesize branchedTokenIndex=_branchedTokenIndex;
@property(nonatomic) NSUInteger revisedDocumentLocation; // @synthesize revisedDocumentLocation=_revisedDocumentLocation;
@property(nonatomic) struct _TIRevisionHistoryTokenIterator originalIterator; // @synthesize originalIterator=_originalIterator;
@property(nonatomic) _NSRange originalSelectedTokenRange; // @synthesize originalSelectedTokenRange=_originalSelectedTokenRange;
// - (void).cxx_destruct;
- (id)initWithTokenIterator:(struct _TIRevisionHistoryTokenIterator)arg1;
- (id)init;

@end

