//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 22 2020 01:47:48).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSAttributedString.h>

#import <Home/HFStringGenerator-Protocol.h>

@interface NSAttributedString (HFStringGeneratoreAdditions) <HFStringGenerator>
- (id)_synthesizeAttributedSubstringFromRange:(_NSRange)arg1 usingDefaultAttributes:(id)arg2;
- (BOOL)prefersDynamicString;
- (id)stringWithAttributes:(id)arg1;
- (id)dynamicStringForSize:(CGSize)arg1 attributes:(id)arg2;
@end

