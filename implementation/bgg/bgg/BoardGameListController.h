//
//  BoardGameListController.h
//  bgg
//
//  Created by João Caxaria on 4/21/11.
//  Copyright 2011 Imaginary Factory. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "IBreadcrumbMenu.h"

@interface BoardGameListController : UITableViewController<IBreadcrumbMenu> {
    NSArray* _boardGames;
}

@property (nonatomic, retain) NSArray* boardGames;

@end
