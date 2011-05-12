//
//  DBMechanic.h
//  bgg
//
//  Created by João Caxaria on 5/12/11.
//  Copyright (c) 2011 Imaginary Factory. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class DBBoardGame;

@interface DBMechanic : NSManagedObject {
@private
}
@property (nonatomic, retain) NSString * id;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet* boardGames;

@end
