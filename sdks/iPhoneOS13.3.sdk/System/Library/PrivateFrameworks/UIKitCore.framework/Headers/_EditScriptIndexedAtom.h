//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _EditScriptIndexedAtom : NSObject
{
    long long _editOperation;
    NSUInteger _indexToEdit;
    NSUInteger _indexInArrayB;
    NSString *_replacementText;
}

+ (id)atomWithEditOperation:(long long)arg1 indexToEdit:(NSUInteger)arg2 newText:(id)arg3 indexInArrayB:(NSUInteger)arg4;
@property(retain, nonatomic) NSString *replacementText; // @synthesize replacementText=_replacementText;
@property(nonatomic) NSUInteger indexInArrayB; // @synthesize indexInArrayB=_indexInArrayB;
@property(nonatomic) NSUInteger indexToEdit; // @synthesize indexToEdit=_indexToEdit;
@property(nonatomic) long long editOperation; // @synthesize editOperation=_editOperation;
// - (void).cxx_destruct;
- (id)description;
- (id)initWithEditOperation:(long long)arg1 indexToEdit:(NSUInteger)arg2 newText:(id)arg3 indexInArrayB:(NSUInteger)arg4;

@end
