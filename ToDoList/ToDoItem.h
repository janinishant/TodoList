//
//  ToDoItem.h
//  ToDoList
//
//  Created by Nishant Jani on 6/6/15.
//  Copyright (c) 2015 Nishant Jani. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ToDoItem : NSObject

@property NSString *itemName;
@property BOOL isCompleted;
@property (readonly) NSDate *creationDate;

@end
