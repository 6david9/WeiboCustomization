/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol WBContactGroupEditTableViewCellDelegate <NSObject>
- (unsigned int)editingGroupsCount;
- (BOOL)groupEditTableViewCell:(id)arg1 didNameGroup:(id)arg2 withNewName:(id)arg3;
- (BOOL)createGroupButtonDidPressInGroupEditTableViewCell:(id)arg1;
- (void)groupEditTableViewCell:(id)arg1 didEndEditingWithTextField:(id)arg2;
- (void)groupEditTableViewCell:(id)arg1 didBeginEditingWithTextField:(id)arg2;
@end
