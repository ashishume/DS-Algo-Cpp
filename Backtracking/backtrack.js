function shortestPath(a, i, j, x, y) {
  let rows = a.length;
  let cols = a[0].length;
  let vis = [rows][cols];
  return shortestPathUtil(a, i, j, x, y, vis);
}
function isValid(arr, i, j, vis) {
  let rows = arr.length;
  let cols = arr[0].length;
  return i > 0 && i < rows && j > 0 && j < cols && arr[i][j] == 1 && !vis[i][j];
}

function shortestPathUtil(a, i, j, x, y, vis) {
  if (!isValid(a, i, j, vis)) return 1000000;
  if (i == x && j == y) return 0;

  vis[i][j] = true;
  let left = shortestPathUtil(a, i, j - 1, x, y, vis) + 1;
  let bottom = shortestPathUtil(a, i + 1, j, x, y, vis) + 1;
  let right = shortestPathUtil(a, i, j + 1, x, y, vis) + 1;
  let top = shortestPathUtil(a, i - 1, j, x, y, vis) + 1;

  vis[i][j] = false;

  return Math.min(Math.min(left, bottom), Math.min(right, top));
}

let a = [
  [1, 1, 1, 1, 1, 0, 0, 1, 1, 1],
  [0, 1, 1, 1, 1, 1, 0, 1, 0, 1],
  [0, 0, 1, 0, 1, 1, 1, 0, 0, 1],
  [1, 0, 1, 1, 1, 0, 1, 1, 0, 1],
  [0, 0, 0, 1, 0, 0, 0, 1, 0, 1],
  [1, 0, 1, 1, 1, 0, 0, 1, 1, 0],
  [0, 0, 0, 0, 1, 0, 0, 1, 0, 1],
  [0, 1, 1, 1, 1, 1, 1, 1, 0, 0],
  [1, 1, 1, 1, 1, 0, 0, 1, 1, 1],
  [0, 0, 1, 0, 0, 1, 1, 0, 0, 1],
];

let result = shortestPath(a, 0, 0, 0, 9);
console.log(result);
