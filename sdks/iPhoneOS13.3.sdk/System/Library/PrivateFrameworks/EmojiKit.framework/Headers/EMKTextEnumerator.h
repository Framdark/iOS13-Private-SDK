//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface EMKTextEnumerator : NSObject
{
    NSMutableDictionary *_emojiDatasByLanguage;
}

// - (void).cxx_destruct;
- (void)enumerateEmojiSignifiersInString:(id)arg1 touchingRange:(_NSRange)arg2 language:(id)arg3 usingBlock:(id /* CDUnknownBlockType */)arg4;
- (id)emojiDataForLanguage:(id)arg1;
- (id)init;

@end

